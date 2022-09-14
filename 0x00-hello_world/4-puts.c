#include &lt;stdlib.h&gt;

#include &lt;stdlib.h&gt;

#include &lt;time.h&gt;

/**
 *
 * * main - Entry point
 *
 * *
 *
 * * Return: Always 0 (Success)
 *
 * */

int main(void)

{

	char low, e, q;

	e = &#39;e&#39;;

	q = &#39;q&#39;;

	for (low = &#39;a&#39;; low &lt;= &#39;z&#39;; low++)

	{

		if (low != e &amp;&amp; low != q)

			putchar(low);



	}

	printf(&quot;\n&quot;);

	return (0);

}
