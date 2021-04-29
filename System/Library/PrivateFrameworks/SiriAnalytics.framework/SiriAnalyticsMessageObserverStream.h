/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriAnalytics/SiriAnalyticsMessageProducer.h>
#import <SiriAnalytics/SiriAnalyticsObservableMessages.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSString;

@interface SiriAnalyticsMessageObserverStream : NSObject <SiriAnalyticsMessageProducer, SiriAnalyticsObservableMessages> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _messageObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)produceMessages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)subscribeWithMessagesProduced:(/*^block*/id)arg1 ;
-(void)_removeObserverHandle:(id)arg1 ;
-(void)_publishMessagesToAllObservers:(id)arg1 ;
@end
