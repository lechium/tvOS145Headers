/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy {

	CNQueue* _queue;

}

@property (nonatomic,readonly) CNQueue * queue;              //@synthesize queue=_queue - In the implementation block
-(CNQueue *)queue;
-(id)allEvents;
-(id)initWithQueue:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(BOOL)isSequenceTerminated;
@end

