/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest {

	BOOL _includeInternalState;
	BOOL _includePayloadContents;
	NSString* _organizationIdentifier;
	NSArray* _payloadIdentifiers;

}

@property (assign,nonatomic) BOOL includeInternalState;                    //@synthesize includeInternalState=_includeInternalState - In the implementation block
@property (assign,nonatomic) BOOL includePayloadContents;                  //@synthesize includePayloadContents=_includePayloadContents - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * payloadIdentifiers;                   //@synthesize payloadIdentifiers=_payloadIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSArray *)payloadIdentifiers;
-(BOOL)includePayloadContents;
-(BOOL)includeInternalState;
-(void)setPayloadIdentifiers:(NSArray *)arg1 ;
-(void)setIncludeInternalState:(BOOL)arg1 ;
-(void)setIncludePayloadContents:(BOOL)arg1 ;
@end
