/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProofReader/ProofReader-Structs.h>
@interface PRLexiconCorrectionCursor : NSObject {

	LXCursorRef _cursor;
	unsigned long long _replacementsCount;
	unsigned long long _insertionsCount;
	unsigned long long _deletionsCount;
	unsigned long long _transpositionsCount;
	unsigned long long _advancementLength;

}

@property (readonly) LXCursorRef cursor;                                  //@synthesize cursor=_cursor - In the implementation block
@property (readonly) unsigned long long replacementsCount;                //@synthesize replacementsCount=_replacementsCount - In the implementation block
@property (readonly) unsigned long long insertionsCount;                  //@synthesize insertionsCount=_insertionsCount - In the implementation block
@property (readonly) unsigned long long deletionsCount;                   //@synthesize deletionsCount=_deletionsCount - In the implementation block
@property (readonly) unsigned long long transpositionsCount;              //@synthesize transpositionsCount=_transpositionsCount - In the implementation block
@property (readonly) unsigned long long advancementLength;                //@synthesize advancementLength=_advancementLength - In the implementation block
@property (readonly) unsigned long long totalEdits; 
@property (readonly) double prefixProbability; 
@property (readonly) unsigned long long errorType; 
-(id)description;
-(void)dealloc;
-(LXCursorRef)cursor;
-(unsigned long long)errorType;
-(unsigned long long)totalEdits;
-(id)initWithCursor:(LXCursorRef)arg1 replacementsCount:(unsigned long long)arg2 insertionsCount:(unsigned long long)arg3 deletionsCount:(unsigned long long)arg4 transpositionsCount:(unsigned long long)arg5 advancementLength:(unsigned long long)arg6 ;
-(double)prefixProbability;
-(unsigned long long)replacementsCount;
-(unsigned long long)insertionsCount;
-(unsigned long long)deletionsCount;
-(unsigned long long)transpositionsCount;
-(unsigned long long)advancementLength;
@end

