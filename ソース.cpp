#include <stdio.h>

#include "FixedRelationDBs.h"
#include "FixedFlatMap.h"

template<size_t N>
struct FixedMapedRelationDBs {
	FixedFlatMap<Any, FixedRelationDB, N> F;
};

template<size_t N>
FixedMapedRelationDB<N> ConstructFixedMapedRelationDB<N>() {
	FixedMapedRelationDB<N> F;

	return F;
}

template<size_t N>
bool Free(FixedMapedRelationDB<N>& In) {
	return Free(In.F);
}

template<size_t A,size_t B>
struct FixedMapedRelationDBss {
	FixedFlatMap<Any, FixedRelationDBs<B>, A> F;
};

template<size_t A,size_t B>
FixedMapedRelationDBss<A,B> ConstructFixedMapedRelationDBss<A,B>() {
	FixedMapedRelationDBss<A,B> F;

	return F;
}

template<size_t A,size_t B>
bool Free(FixedMapedRelationDB<A,B>& In) {
	return Free(In.F);
}