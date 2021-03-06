/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BKSHIDEventDeliveryPolicyObserving.h>

@class NSMapTable, UIScene, NSString;

@interface _UIFocusActiveSceneObserver : NSObject <BKSHIDEventDeliveryPolicyObserving> {

	NSMapTable* _hidObserverMapTable;
	NSMapTable* _observers;
	UIScene* _scene;
	struct {
		unsigned supportsHIDUpdates : 1;
		unsigned wasActiveScene : 1;
	}  _flags;

}

@property (getter=isActiveScene,nonatomic,readonly) BOOL activeScene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)observerDeliveryPolicyDidChange:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)_keyWindowDidChangeNotification:(id)arg1 ;
-(void)_windowDidAttachContext:(id)arg1 ;
-(void)_windowDidDetachContext:(id)arg1 ;
-(void)_addDeliveryObserverForWindow:(id)arg1 ;
-(void)_notifyObserversIfNecessary;
-(void)_removeDeliverObserverForWindow:(id)arg1 ;
-(BOOL)isActiveScene;
-(void)beginMonitoringContextChangesForWindow:(id)arg1 ;
-(void)stopMonitoringContextChangesForWindow:(id)arg1 ;
@end

