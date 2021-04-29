/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeHub.framework/HomeHub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HHEndpointAttributes.h>

@class NSUUID, NSString;

@interface HHEndpoint : NSObject <NSSecureCoding, HHEndpointAttributes> {

	NSUUID* _launchInstanceId;
	NSUUID* _accessoryId;
	NSString* _mediaRouteId;
	unsigned long long _state;

}

@property (nonatomic,readonly) NSUUID * accessoryId;                     //@synthesize accessoryId=_accessoryId - In the implementation block
@property (nonatomic,readonly) NSUUID * endpointId; 
@property (nonatomic,readonly) NSUUID * launchInstanceId;                //@synthesize launchInstanceId=_launchInstanceId - In the implementation block
@property (nonatomic,readonly) NSString * mediaRouteId;                  //@synthesize mediaRouteId=_mediaRouteId - In the implementation block
@property (nonatomic,readonly) unsigned long long bubbleId; 
@property (nonatomic,readonly) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(NSUUID *)endpointId;
-(NSString *)mediaRouteId;
-(NSUUID *)accessoryId;
-(NSUUID *)launchInstanceId;
-(id)initWithAccessoryId:(id)arg1 mediaRouteId:(id)arg2 bubbleId:(id)arg3 state:(unsigned long long)arg4 ;
-(unsigned long long)bubbleId;
-(id)createMachServiceWithName:(id)arg1 targetQueue:(id)arg2 flags:(unsigned long long)arg3 ;
-(id)NSXPCConnectionWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)NSXPCListenerWithMachServiceName:(id)arg1 ;
@end
