/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VNRequest, NSArray;

@interface _VNRequestForensicsParentChildRequests : NSObject {

	VNRequest* _parentRequest;
	NSArray* _orderedChildRequests;

}

@property (nonatomic,readonly) VNRequest * parentRequest;                        //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChildRequests;              //@synthesize orderedChildRequests=_orderedChildRequests - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2 ;
-(VNRequest *)parentRequest;
-(NSArray *)orderedChildRequests;
@end

