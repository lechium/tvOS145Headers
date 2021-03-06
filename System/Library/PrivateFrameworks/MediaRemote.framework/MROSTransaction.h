/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface MROSTransaction : NSObject {

	NSObject*<OS_os_transaction> _containedTransaction;
	NSString* _transactionName;

}

@property (nonatomic,readonly) NSString * transactionName;              //@synthesize transactionName=_transactionName - In the implementation block
-(id)description;
-(id)initWithName:(id)arg1 ;
-(void)invalidateTransaction;
-(NSString *)transactionName;
@end

