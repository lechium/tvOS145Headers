/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase {

	NSString* _statusBundleIdentifier;
	NSString* _statusExtensionPoint;
	NSString* _statusDisplayName;
	NSString* _statusContainerDisplayName;
	NSString* _statusContainerIdentifier;
	NSString* _statusPath;
	NSString* _statusVersion;
	NSString* _statusUserElection;

}

@property (nonatomic,copy) NSString * statusBundleIdentifier;                  //@synthesize statusBundleIdentifier=_statusBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusExtensionPoint;                    //@synthesize statusExtensionPoint=_statusExtensionPoint - In the implementation block
@property (nonatomic,copy) NSString * statusDisplayName;                       //@synthesize statusDisplayName=_statusDisplayName - In the implementation block
@property (nonatomic,copy) NSString * statusContainerDisplayName;              //@synthesize statusContainerDisplayName=_statusContainerDisplayName - In the implementation block
@property (nonatomic,copy) NSString * statusContainerIdentifier;               //@synthesize statusContainerIdentifier=_statusContainerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusPath;                              //@synthesize statusPath=_statusPath - In the implementation block
@property (nonatomic,copy) NSString * statusVersion;                           //@synthesize statusVersion=_statusVersion - In the implementation block
@property (nonatomic,copy) NSString * statusUserElection;                      //@synthesize statusUserElection=_statusUserElection - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withContainerDisplayName:(id)arg4 withContainerIdentifier:(id)arg5 withPath:(id)arg6 withVersion:(id)arg7 withUserElection:(id)arg8 ;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withPath:(id)arg4 withVersion:(id)arg5 withUserElection:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusBundleIdentifier:(NSString *)arg1 ;
-(void)setStatusExtensionPoint:(NSString *)arg1 ;
-(void)setStatusDisplayName:(NSString *)arg1 ;
-(void)setStatusContainerDisplayName:(NSString *)arg1 ;
-(void)setStatusContainerIdentifier:(NSString *)arg1 ;
-(void)setStatusPath:(NSString *)arg1 ;
-(void)setStatusVersion:(NSString *)arg1 ;
-(void)setStatusUserElection:(NSString *)arg1 ;
-(NSString *)statusBundleIdentifier;
-(NSString *)statusExtensionPoint;
-(NSString *)statusDisplayName;
-(NSString *)statusContainerDisplayName;
-(NSString *)statusContainerIdentifier;
-(NSString *)statusPath;
-(NSString *)statusVersion;
-(NSString *)statusUserElection;
@end

