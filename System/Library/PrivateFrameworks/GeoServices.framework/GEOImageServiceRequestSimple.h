/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOImageServiceRequest, NSUUID, NSString;

@interface GEOImageServiceRequestSimple : GEOXPCRequest <GEOXPCRequest> {

	GEOImageServiceRequest* _request;
	NSUUID* _identifier;

}

@property (nonatomic,retain) GEOImageServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(BOOL)isValid;
-(NSUUID *)identifier;
-(GEOImageServiceRequest *)request;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setRequest:(GEOImageServiceRequest *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)expectsReply;
@end

