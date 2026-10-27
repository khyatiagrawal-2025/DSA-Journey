
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int m = nums1Size;
    int n = nums2Size;
    int arr[m + n];

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            arr[k++] = nums1[i++];
        } else {
            arr[k++] = nums2[j++];
        }
    }

    while (i < m) {
        arr[k++] = nums1[i++];
    }

    while (j < n) {
        arr[k++] = nums2[j++];
    }

    int total = m + n;

    if (total % 2 == 1) {
        return arr[total / 2];
    } else {
        return (arr[total / 2 - 1] + arr[total / 2]) / 2.0;
    }
}
