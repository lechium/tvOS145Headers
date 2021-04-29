/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VUIAppDocumentUpdateContext.h>

@class IKUpdateServiceRequest, NSDictionary, IKViewElement, NSString;

@interface VUIAppDocumentManualUpdateContext : NSObject <VUIAppDocumentUpdateContext> {

	IKUpdateServiceRequest* _currentUpdateRequest;
	NSDictionary* _contextDictionary;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKUpdateServiceRequest * currentUpdateRequest;              //@synthesize currentUpdateRequest=_currentUpdateRequest - In the implementation block
@property (nonatomic,retain) NSDictionary * contextDictionary;                           //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (assign,nonatomic,__weak) IKViewElement * viewElement;                         //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)contextDictionary;
-(void)setContextDictionary:(NSDictionary *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setCurrentUpdateRequest:(IKUpdateServiceRequest *)arg1 ;
-(void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2 ;
-(void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2 ;
-(IKUpdateServiceRequest *)currentUpdateRequest;
-(id)initWithContextDictionary:(id)arg1 viewElement:(id)arg2 ;
@end

