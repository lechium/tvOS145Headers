/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKVDonateServiceProvider.h>
#import <libobjc.A.dylib/CKVDonateService.h>

@class CKVXPCServiceBridge, NSString;

@interface CKVDonateXPCServiceWrapper : NSObject <CKVDonateServiceProvider, CKVDonateService> {

	CKVXPCServiceBridge* _xpcServiceBridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)donateService;
-(oneway void)submitVocabularyDonation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

