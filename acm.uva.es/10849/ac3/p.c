void go()
{
__asm__ __volatile__(
"	jmp main2\n"
"_mktab:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	movl	$48, %eax\n"
"L6:\n"
"	movl	$1, %ecx\n"
"	movl	%ecx, _isdig(,%eax,4)\n"
"	incl	%eax\n"
"	cmpl	$57, %eax\n"
"	jle	L6\n"
"	movl	$48, %eax\n"
"L11:\n"
"	movl	$1, %edx\n"
"	movl	%edx, _isdigz(,%eax,4)\n"
"	incl	%eax\n"
"	cmpl	$57, %eax\n"
"	jle	L11\n"
"	movl	$1, %eax\n"
"	movl	%eax, _isdigz+180\n"
"	popl	%ebp\n"
"	ret\n"
".lcomm _n.0,16\n"
".lcomm _s.1,16\n"
".lcomm _t.2,16\n"
"	.p2align 4,,15\n"
"main2:\n"
"	pushl	%ebp\n"
"	movl	%esp, %ebp\n"
"	pushl	%edi\n"
"	pushl	%esi\n"
"	pushl	%ebx\n"
"	subl	$44, %esp\n"
"	call	_mktab\n"
"	movl	$1048576, %eax\n"
"	movl	%eax, 8(%esp)\n"
"	movl	$_inbuf, %esi\n"
"	movl	%esi, 4(%esp)\n"
"	movl	$0, (%esp)\n"
"	call	read\n"
"	movb	$0, _inbuf(%eax)\n"
"	movl	$_outbuf, -16(%ebp)\n"
"	movzbl	_inbuf, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L129\n"
"L20:\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L20\n"
"L98:\n"
"	movzbl	%cl, %eax\n"
"	incl	%esi\n"
"	subl	$48, %eax\n"
"	movl	%eax, -32(%ebp)\n"
"	movl	%eax, _t.2\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %bl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L130\n"
"L25:\n"
"	movl	-32(%ebp), %eax\n"
"	leal	(%eax,%eax,4), %edx\n"
"	movzbl	%bl, %eax\n"
"	incl	%esi\n"
"	leal	-48(%eax,%edx,2), %edx\n"
"	movl	%edx, -32(%ebp)\n"
"	movl	%edx, _t.2\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %bl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L25\n"
"L100:\n"
"	movl	-32(%ebp), %eax\n"
"	decl	-32(%ebp)\n"
"	movl	-32(%ebp), %edx\n"
"	movl	%edx, _t.2\n"
"	testl	%eax, %eax\n"
"	jle	L102\n"
"L95:\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %edi\n"
"	testl	%edi, %edi\n"
"	jne	L104\n"
"	.p2align 4,,15\n"
"L32:\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	je	L32\n"
"L104:\n"
"	movzbl	%cl, %eax\n"
"	incl	%esi\n"
"	subl	$48, %eax\n"
"	movl	%eax, -28(%ebp)\n"
"	movl	%eax, _s.1\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %bl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %edx\n"
"	testl	%edx, %edx\n"
"	je	L131\n"
"	.p2align 4,,15\n"
"L37:\n"
"	movl	-28(%ebp), %ecx\n"
"	leal	(%ecx,%ecx,4), %edx\n"
"	movzbl	%bl, %eax\n"
"	incl	%esi\n"
"	leal	-48(%eax,%edx,2), %edx\n"
"	movl	%edx, -28(%ebp)\n"
"	movl	%edx, _s.1\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %bl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L37\n"
"L106:\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L108\n"
"	.p2align 4,,15\n"
"L41:\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L41\n"
"L108:\n"
"	movzbl	%cl, %eax\n"
"	incl	%esi\n"
"	leal	-48(%eax), %edx\n"
"	movl	%edx, _n.0\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %bl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L110\n"
"	.p2align 4,,15\n"
"L46:\n"
"	leal	(%edx,%edx,4), %eax\n"
"	movzbl	%bl, %edx\n"
"	leal	-48(%edx,%eax,2), %eax\n"
"	incl	%esi\n"
"	movl	%eax, %edx\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %bl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L46\n"
"	movl	%edx, _n.0\n"
"L110:\n"
"	movl	-28(%ebp), %eax\n"
"	decl	-28(%ebp)\n"
"	movl	-28(%ebp), %edx\n"
"	movl	%edx, _s.1\n"
"	testl	%eax, %eax\n"
"	jle	L112\n"
"	movl	%edx, -36(%ebp)\n"
"	.p2align 4,,15\n"
"L94:\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L114\n"
"	.p2align 4,,15\n"
"L53:\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %edi\n"
"	testl	%edi, %edi\n"
"	je	L53\n"
"L114:\n"
"	movzbl	%cl, %eax\n"
"	subl	$48, %eax\n"
"	movl	%eax, -24(%ebp)\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %dl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	je	L116\n"
"	.p2align 4,,15\n"
"L58:\n"
"	movl	-24(%ebp), %ecx\n"
"	leal	(%ecx,%ecx,4), %eax\n"
"	movzbl	%dl, %edx\n"
"	leal	-48(%edx,%eax,2), %edx\n"
"	movl	%edx, -24(%ebp)\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %dl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L58\n"
"L116:\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L118\n"
"	.p2align 4,,15\n"
"L62:\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L62\n"
"L118:\n"
"	movzbl	%cl, %eax\n"
"	subl	$48, %eax\n"
"	movl	%eax, -20(%ebp)\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %dl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L120\n"
"	.p2align 4,,15\n"
"L67:\n"
"	movl	-20(%ebp), %ecx\n"
"	leal	(%ecx,%ecx,4), %eax\n"
"	movzbl	%dl, %edx\n"
"	leal	-48(%edx,%eax,2), %edx\n"
"	movl	%edx, -20(%ebp)\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %dl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L67\n"
"L120:\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L122\n"
"	.p2align 4,,15\n"
"L71:\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %edi\n"
"	testl	%edi, %edi\n"
"	je	L71\n"
"L122:\n"
"	movzbl	%cl, %eax\n"
"	leal	-48(%eax), %edi\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %dl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %ebx\n"
"	testl	%ebx, %ebx\n"
"	je	L124\n"
"	.p2align 4,,15\n"
"L76:\n"
"	leal	(%edi,%edi,4), %eax\n"
"	movzbl	%dl, %edx\n"
"	leal	-48(%edx,%eax,2), %edi\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movb	%cl, %dl\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdig(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L76\n"
"L124:\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L126\n"
"	.p2align 4,,15\n"
"L80:\n"
"	incl	%esi\n"
"	movzbl	(%esi), %ecx\n"
"	movzbl	%cl, %eax\n"
"	movl	_isdigz(,%eax,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L80\n"
"L126:\n"
"	movzbl	%cl, %eax\n"
"	leal	-48(%eax), %ebx\n"
"	incl	%esi\n"
"	movzbl	(%esi), %eax\n"
"	movb	%al, %cl\n"
"	movzbl	%al, %edx\n"
"	movl	_isdig(,%edx,4), %eax\n"
"	testl	%eax, %eax\n"
"	je	L128\n"
"	.p2align 4,,15\n"
"L85:\n"
"	leal	(%ebx,%ebx,4), %eax\n"
"	leal	-48(%edx,%eax,2), %ebx\n"
"	incl	%esi\n"
"	movzbl	(%esi), %eax\n"
"	movb	%al, %cl\n"
"	movzbl	%al, %edx\n"
"	movl	_isdig(,%edx,4), %eax\n"
"	testl	%eax, %eax\n"
"	jne	L85\n"
"L128:\n"
"	movl	-20(%ebp), %edx\n"
"	movl	-24(%ebp), %eax\n"
"	addl	%eax, %edx\n"
"	andl	$1, %edx\n"
"	leal	(%edi,%ebx), %eax\n"
"	andl	$1, %eax\n"
"	cmpl	%eax, %edx\n"
"	je	L86\n"
"	movl	-16(%ebp), %eax\n"
"	movl	$1830842222, (%eax)\n"
"	addl	$4, %eax\n"
"	movl	$174421615, (%eax)\n"
"	addl	$4, %eax\n"
"L135:\n"
"	movl	%eax, -16(%ebp)\n"
"L47:\n"
"	movl	-28(%ebp), %edx\n"
"	movl	-36(%ebp), %eax\n"
"	decl	%eax\n"
"	movl	%eax, -28(%ebp)\n"
"	movl	%eax, -36(%ebp)\n"
"	testl	%edx, %edx\n"
"	jg	L94\n"
"	movl	%eax, _s.1\n"
"L112:\n"
"	movl	-32(%ebp), %eax\n"
"	decl	-32(%ebp)\n"
"	movl	-32(%ebp), %edx\n"
"	movl	%edx, _t.2\n"
"	testl	%eax, %eax\n"
"	jg	L95\n"
"	jmp	L102\n"
"L86:\n"
"	cmpl	%edi, -24(%ebp)\n"
"	je	L136\n"
"L88:\n"
"	subl	-24(%ebp), %edi\n"
"	js	L137\n"
"L90:\n"
"	subl	-20(%ebp), %ebx\n"
"	js	L138\n"
"L91:\n"
"	cmpl	%ebx, %edi\n"
"	je	L139\n"
"	movl	-16(%ebp), %edx\n"
"	movw	$2610, (%edx)\n"
"L134:\n"
"	addl	$2, %edx\n"
"	movl	%edx, -16(%ebp)\n"
"	jmp	L47\n"
"L139:\n"
"	movl	-16(%ebp), %eax\n"
"	movw	$2609, (%eax)\n"
"	addl	$2, %eax\n"
"	jmp	L135\n"
"L138:\n"
"	negl	%ebx\n"
"	jmp	L91\n"
"L137:\n"
"	negl	%edi\n"
"	jmp	L90\n"
"L136:\n"
"	cmpl	%ebx, -20(%ebp)\n"
"	jne	L88\n"
"	movl	-16(%ebp), %edx\n"
"	movw	$2608, (%edx)\n"
"	jmp	L134\n"
"L131:\n"
"	movl	_s.1, %eax\n"
"	movl	%eax, -28(%ebp)\n"
"	jmp	L106\n"
"L130:\n"
"	movl	_t.2, %edx\n"
"	movl	%edx, -32(%ebp)\n"
"	jmp	L100\n"
"L129:\n"
"	movzbl	_inbuf, %ecx\n"
"	jmp	L98\n"
"L102:\n"
"L96:\n"
"	subl	$_outbuf, -16(%ebp)\n"
"	movl	-16(%ebp), %ecx\n"
"	movl	%ecx, 8(%esp)\n"
"	movl	$_outbuf, %ebx\n"
"	movl	%ebx, 4(%esp)\n"
"	movl	$1, (%esp)\n"
"	call	write\n"
"	movl	$0, (%esp)\n"
"	call	exit\n"
"	.comm	_isdig, 1024\n"
"	.comm	_isdigz, 1024\n"
"	.comm	_inbuf, 1048576\n"
"	.comm	_outbuf, 1048576\n"
);
}

int main()
{
	go();
	return 0;
}