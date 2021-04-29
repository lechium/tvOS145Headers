/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RWIProtocolDOMStorageDomainHandler.h>

@class IKJSInspectorController, NSString;

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler> {

	IKJSInspectorController* _controller;

}

@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(IKJSInspectorController *)controller;
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getDOMStorageItemsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 ;
-(void)setDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5 ;
-(void)removeDOMStorageItemWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 storageId:(id)arg3 key:(id)arg4 ;
-(void)_itemAdded:(id)arg1 ;
-(void)_itemUpdated:(id)arg1 ;
-(void)_itemRemoved:(id)arg1 ;
-(void)_itemsCleared:(id)arg1 ;
-(id)_storageForStorageId:(id)arg1 ;
-(id)_storageIdForStorage:(id)arg1 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)startListeningForStorageNotifications;
-(void)stopListeningForStorageNotifications;
@end

