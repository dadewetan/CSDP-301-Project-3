.386
.model flat, c
.code


AdderSUM     proc
             push ebp

             mov ebp, esp ;pushing ebp into stack

             mov eax, [ebp+8] ;eax = a
             mov ebx, [ebp+12] ;ebx = b
             mov ecx, [ebp+16] ;ecx = c

             add eax, ebx ;adding eax with ebx/computing the sum
             add eax, ecx ;adding eax with ecx/computing the sum


             pop ebp
             ret

AdderSUM     endp
             end