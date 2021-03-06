/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSData;

@interface PFLCompletionContext : NSObject {

	NSError* _error;
	NSData* _privatizedDiffs;

}

@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * privatizedDiffs;              //@synthesize privatizedDiffs=_privatizedDiffs - In the implementation block
-(NSError *)error;
-(NSData *)privatizedDiffs;
-(id)initWithPrivatizedDiffs:(id)arg1 error:(id)arg2 ;
@end

