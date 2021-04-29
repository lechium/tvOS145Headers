/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RTInferredMapItemDeduper : NSObject {

	/*^block*/id _deduperFunction;

}

@property (nonatomic,copy,readonly) id deduperFunction;              //@synthesize deduperFunction=_deduperFunction - In the implementation block
-(id)init;
-(id)initWithDeduperFunction:(/*^block*/id)arg1 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(BOOL)inferredMapItem:(id)arg1 dedupesToInferredMapItem:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)ingestInferredMapItem:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)ingestInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)deduperFunction;
@end
