/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSBlockTransaction.h>

@interface TVSBlockTransaction : BSBlockTransaction {

	/*^block*/id _failsForChildTransactionBlock;

}

@property (nonatomic,copy) id failsForChildTransactionBlock;              //@synthesize failsForChildTransactionBlock=_failsForChildTransactionBlock - In the implementation block
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 failsForChildTransaction:(/*^block*/id)arg2 ;
-(id)failsForChildTransactionBlock;
-(void)setFailsForChildTransactionBlock:(id)arg1 ;
@end

