/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMEventNotificationQueueDelegate;
@class IMDoubleLinkedList;

@interface IMEventNotificationQueue : NSObject {

	BOOL _paused;
	BOOL _scheduled;
	BOOL _busy;
	id<IMEventNotificationQueueDelegate> _delegate;
	IMDoubleLinkedList* _eventNotificationList;

}

@property (nonatomic,readonly) IMDoubleLinkedList * eventNotificationList;              //@synthesize eventNotificationList=_eventNotificationList - In the implementation block
@property (getter=isScheduled,readonly) BOOL scheduled;                                 //@synthesize scheduled=_scheduled - In the implementation block
@property (__weak) id<IMEventNotificationQueueDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBusy,readonly) BOOL busy;                                           //@synthesize busy=_busy - In the implementation block
@property (readonly) long long count; 
@property (getter=isPaused) BOOL paused;                                                //@synthesize paused=_paused - In the implementation block
-(id)init;
-(long long)count;
-(id<IMEventNotificationQueueDelegate>)delegate;
-(void)setDelegate:(id<IMEventNotificationQueueDelegate>)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPaused;
-(BOOL)isScheduled;
-(void)setPaused:(BOOL)arg1 ;
-(void)_setBusy:(BOOL)arg1 ;
-(BOOL)isBusy;
-(void)_processQueue;
-(void)cancelEventNotificationsForNotificationTarget:(id)arg1 ;
-(void)cancelAllEventNotifications;
-(void)pushEventTarget:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)appendEventTarget:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)pushEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)appendEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)_dispatchProcessQueue;
-(void)_didChangeBusyState:(BOOL)arg1 ;
-(void)_invokeEvent:(id)arg1 ;
-(void)_willProcessQueue;
-(void)_invokeNotifications;
-(void)_didProcessQueue;
-(void)_didAddNotification:(id)arg1 ;
-(void)_didCancelNotifications;
-(void)appendEventNotification:(id)arg1 ;
-(void)pushEventNotification:(id)arg1 ;
-(void)_scheduleIfNeeded:(BOOL)arg1 ;
-(void)_didChangePausedState:(BOOL)arg1 ;
-(BOOL)containsNotificationTarget:(id)arg1 ;
-(IMDoubleLinkedList *)eventNotificationList;
@end
