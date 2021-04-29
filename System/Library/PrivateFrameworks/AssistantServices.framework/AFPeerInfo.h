/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _isDeviceOwnedByCurrentUser;
	BOOL _isCommunalDevice;
	NSString* _assistantIdentifier;
	NSString* _idsIdentifier;
	NSString* _idsDeviceUniqueIdentifier;
	NSString* _rapportEffectiveIdentifier;
	NSString* _homeKitAccessoryIdentifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _roomName;
	NSString* _name;
	NSString* _productType;
	NSString* _buildVersion;
	NSString* _userInterfaceIdiom;
	NSString* _aceVersion;

}

@property (nonatomic,readonly) BOOL isDeviceOwnedByCurrentUser;                         //@synthesize isDeviceOwnedByCurrentUser=_isDeviceOwnedByCurrentUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * assistantIdentifier;                     //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsIdentifier;                           //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsDeviceUniqueIdentifier;               //@synthesize idsDeviceUniqueIdentifier=_idsDeviceUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * rapportEffectiveIdentifier;              //@synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeKitAccessoryIdentifier;              //@synthesize homeKitAccessoryIdentifier=_homeKitAccessoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaSystemIdentifier;                   //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRouteIdentifier;                    //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isCommunalDevice;                                   //@synthesize isCommunalDevice=_isCommunalDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomName;                                //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * productType;                             //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * userInterfaceIdiom;                      //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceVersion;                              //@synthesize aceVersion=_aceVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productType;
-(NSString *)buildVersion;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)userInterfaceIdiom;
-(NSString *)mediaSystemIdentifier;
-(NSString *)roomName;
-(NSString *)aceVersion;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)mediaRouteIdentifier;
-(id)ad_shortDescription;
-(NSString *)idsDeviceUniqueIdentifier;
-(NSString *)assistantIdentifier;
-(BOOL)isCommunalDevice;
-(BOOL)isDeviceOwnedByCurrentUser;
-(NSString *)idsIdentifier;
-(NSString *)rapportEffectiveIdentifier;
-(NSString *)homeKitAccessoryIdentifier;
-(id)initWithIsDeviceOwnedByCurrentUser:(BOOL)arg1 assistantIdentifier:(id)arg2 idsIdentifier:(id)arg3 idsDeviceUniqueIdentifier:(id)arg4 rapportEffectiveIdentifier:(id)arg5 homeKitAccessoryIdentifier:(id)arg6 mediaSystemIdentifier:(id)arg7 mediaRouteIdentifier:(id)arg8 isCommunalDevice:(BOOL)arg9 roomName:(id)arg10 name:(id)arg11 productType:(id)arg12 buildVersion:(id)arg13 userInterfaceIdiom:(id)arg14 aceVersion:(id)arg15 ;
@end
