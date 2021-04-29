/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject {

	NSDate* _date;
	unsigned long long _transactionCount;

}

@property (nonatomic,retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long transactionCount;              //@synthesize transactionCount=_transactionCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)transactionCount;
-(void)setTransactionCount:(unsigned long long)arg1 ;
@end
