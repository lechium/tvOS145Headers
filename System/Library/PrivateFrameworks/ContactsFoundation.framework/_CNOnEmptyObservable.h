/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNOnEmptyObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _nextObservable;
	BOOL _observableIsEmpty;

}

@property (nonatomic,retain) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
-(id)subscribe:(id)arg1 ;
-(id<CNObservable>)observable;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(id)initWithObservable:(id)arg1 nextObservable:(id)arg2 ;
-(void)observableDidSendResult;
-(BOOL)isObservableEmpty;
-(id)subscribeNextObservable:(id)arg1 ;
@end

