/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VUIAppDocumentUpdateContext.h>

@class IKUpdateServiceRequest, NSArray, NSMutableOrderedSet, NSString;

@interface VUIAppDocumentAutomaticUpdateContext : NSObject <VUIAppDocumentUpdateContext> {

	IKUpdateServiceRequest* _currentUpdateRequest;
	NSArray* _receivedEvents;
	NSMutableOrderedSet* _remainingViewElements;

}

@property (nonatomic,retain) IKUpdateServiceRequest * currentUpdateRequest;              //@synthesize currentUpdateRequest=_currentUpdateRequest - In the implementation block
@property (nonatomic,copy) NSArray * receivedEvents;                                     //@synthesize receivedEvents=_receivedEvents - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * remainingViewElements;                //@synthesize remainingViewElements=_remainingViewElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)receivedEvents;
-(void)setReceivedEvents:(NSArray *)arg1 ;
-(NSMutableOrderedSet *)remainingViewElements;
-(id)_documentUpdateRequestForViewElement:(id)arg1 appContext:(id)arg2 documentRef:(id)arg3 ;
-(void)setCurrentUpdateRequest:(IKUpdateServiceRequest *)arg1 ;
-(void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2 ;
-(void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2 ;
-(IKUpdateServiceRequest *)currentUpdateRequest;
-(id)initWithEvents:(id)arg1 viewElements:(id)arg2 ;
-(void)setRemainingViewElements:(NSMutableOrderedSet *)arg1 ;
@end

