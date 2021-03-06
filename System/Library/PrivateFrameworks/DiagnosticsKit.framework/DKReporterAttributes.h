/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/DKExtensionAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSExtension, NSString, NSSet, NSUUID;

@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying> {

	BOOL _headless;
	NSExtension* _extension;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSString* _version;
	NSSet* _manifest;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * manifest;                             //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                      //@synthesize extension=_extension - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;              //@synthesize headless=_headless - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)version;
-(NSUUID *)uuid;
-(BOOL)isHeadless;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(NSExtension *)extension;
-(NSSet *)manifest;
-(void)_validateAndAddDomain:(id)arg1 withInfo:(id)arg2 toManifest:(id)arg3 ;
-(void)_validateAndAddExtensionManifest:(id)arg1 toManifest:(id)arg2 ;
-(BOOL)isEqualToReportGeneratorAttributes:(id)arg1 ;
@end

