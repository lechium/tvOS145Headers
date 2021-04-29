/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CKSQLiteItem.h>

@class NSString;

@interface CKDApplicationID : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem> {

	NSString* _applicationBundleIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSString* _applicationBundleIdentifierOverrideForPushTopicGeneration;
	NSString* _applicationBundleIdentifierOverrideForTCC;

}

@property (nonatomic,copy) NSString * applicationBundleIdentifier;                                            //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForPushTopicGeneration;              //@synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForTCC;                              //@synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)sqliteRepresentation;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(NSString *)applicationBundleIdentifierOverrideForPushTopicGeneration;
-(NSString *)applicationBundleIdentifierOverrideForTCC;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForTCC:(NSString *)arg1 ;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithApplicationBundleIdentifier:(id)arg1 ;
-(id)initWithApplicationBundleIdentifier:(id)arg1 applicationBundleIdentifierOverrideForContainerAccess:(id)arg2 applicationBundleIdentifierOverrideForNetworkAttribution:(id)arg3 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg4 applicationBundleIdentifierOverrideForTCC:(id)arg5 ;
@end

