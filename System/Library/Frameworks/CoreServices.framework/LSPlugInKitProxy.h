/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/LSDetachable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSApplicationExtensionRecord, NSString, NSUUID, NSDate, LSBundleProxy, NSNumber, NSDictionary, LSExtensionPoint;

@interface LSPlugInKitProxy : LSBundleProxy <LSDetachable, NSSecureCoding> {

	unsigned _platform;
	unsigned _pluginFlags;
	LSApplicationExtensionRecord* _appexRecord;
	NSString* _extensionPointID;
	BOOL _onSystemPartition;
	NSString* _signerOrganization;
	NSString* _pluginIdentifier;
	NSString* _originalIdentifier;
	NSString* _protocol;
	NSUUID* _pluginUUID;
	NSDate* _registrationDate;
	LSBundleProxy* _containingBundle;

}

@property (readonly) BOOL __IS_canProvideIcon; 
@property (readonly) BOOL __IS_isWatchApp; 
@property (readonly) BOOL __IS_isMessagesApp; 
@property (nonatomic,readonly) NSString * pluginIdentifier;                                    //@synthesize pluginIdentifier=_pluginIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * originalIdentifier;                                  //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * protocol;                                            //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSNumber * platform; 
@property (nonatomic,readonly) NSUUID * pluginUUID;                                            //@synthesize pluginUUID=_pluginUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginKitDictionary; 
@property (nonatomic,readonly) NSDictionary * infoPlist; 
@property (nonatomic,readonly) NSDate * registrationDate;                                      //@synthesize registrationDate=_registrationDate - In the implementation block
@property (nonatomic,readonly) LSBundleProxy * containingBundle;                               //@synthesize containingBundle=_containingBundle - In the implementation block
@property (getter=isOnSystemPartition,nonatomic,readonly) BOOL onSystemPartition;              //@synthesize onSystemPartition=_onSystemPartition - In the implementation block
@property (nonatomic,readonly) NSString * teamID; 
@property (nonatomic,readonly) BOOL pluginCanProvideIcon; 
@property (nonatomic,readonly) LSExtensionPoint * extensionPoint; 
+(BOOL)supportsSecureCoding;
+(id)pluginKitProxyForIdentifier:(id)arg1 ;
+(id)pluginKitProxyForURL:(id)arg1 ;
+(id)pluginKitProxyForUUID:(id)arg1 ;
+(id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6 ;
+(id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
+(id)plugInKitProxyForPlugin:(unsigned)arg1 withContext:(LSContext*)arg2 applicationExtensionRecord:(id)arg3 resolveAndDetach:(BOOL)arg4 ;
+(id)plugInKitProxyForPlugin:(unsigned)arg1 withContext:(LSContext*)arg2 ;
-(id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(BOOL)__IS_canProvideIcon;
-(BOOL)__IS_isWatchApp;
-(BOOL)__IS_isMessagesApp;
-(id)un_applicationBundleURL;
-(id)un_applicationBundleIdentifier;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)protocol;
-(NSString *)teamID;
-(id)dataContainerURL;
-(BOOL)profileValidated;
-(BOOL)UPPValidated;
-(BOOL)freeProfileValidated;
-(NSString *)pluginIdentifier;
-(id)bundleType;
-(LSBundleProxy *)containingBundle;
-(NSNumber *)platform;
-(NSUUID *)pluginUUID;
-(NSString *)originalIdentifier;
-(void)detach;
-(BOOL)isOnSystemPartition;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3 ;
-(NSDate *)registrationDate;
-(LSExtensionPoint *)extensionPoint;
-(id)groupContainerURLs;
-(unsigned long long)compatibilityState;
-(NSDictionary *)infoPlist;
-(id)_managedPersonas;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(BOOL)_usesSystemPersona;
-(id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
-(id)_initWithPlugin:(unsigned)arg1 andContext:(LSContext*)arg2 applicationExtensionRecord:(id)arg3 resolveAndDetach:(BOOL)arg4 ;
-(id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6 ;
-(NSDictionary *)pluginKitDictionary;
-(BOOL)pluginCanProvideIcon;
-(id)boundIconsDictionary;
-(id)_valueForEqualityTesting;
-(id)signerOrganization;
@end

