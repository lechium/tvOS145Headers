/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNInhibitor.h>

@protocol OS_os_transaction;
@class NSString, NSObject;

@interface _CNOSTransactionInhibitor : CNInhibitor {

	NSString* _label;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,copy,readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(void)start;
-(void)stop;
-(NSString *)label;
-(NSObject*<OS_os_transaction>)transaction;
-(id)initWithLabel:(id)arg1 ;
@end

