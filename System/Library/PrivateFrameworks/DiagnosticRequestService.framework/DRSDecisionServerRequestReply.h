/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DRSDecisionServerRequestReply : NSObject {

	BOOL _requestAccepted;
	id _request;
	NSString* _rejectionReason;

}

@property (nonatomic,readonly) id request;                              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL requestAccepted;                    //@synthesize requestAccepted=_requestAccepted - In the implementation block
@property (nonatomic,readonly) NSString * rejectionReason;              //@synthesize rejectionReason=_rejectionReason - In the implementation block
-(id)request;
-(NSString *)rejectionReason;
-(id)initWithOriginalRequest:(id)arg1 requestAccepted:(BOOL)arg2 rejectionReason:(id)arg3 ;
-(id)initWithOriginalRequest:(id)arg1 reply:(id)arg2 ;
-(BOOL)requestAccepted;
@end

