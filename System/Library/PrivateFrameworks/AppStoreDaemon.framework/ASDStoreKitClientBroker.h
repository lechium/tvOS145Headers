/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASDStoreKitClientProtocol.h>

@class NSMapTable, NSString;

@interface ASDStoreKitClientBroker : NSObject <ASDStoreKitClientProtocol> {

	NSMapTable* _clients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBroker;
-(id)init;
-(void)updatedTransactions:(id)arg1 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)unregisterClientWithIdentifier:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)removedTransactions:(id)arg1 ;
-(void)downloadAdded:(id)arg1 ;
-(void)downloadStatusChanged:(id)arg1 ;
-(void)downloadRemoved:(id)arg1 ;
-(void)storefrontChanged:(id)arg1 ;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)removedEntitlementsForProductIdentifiers:(id)arg1 ;
-(void)handleAuthenticateRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end
