/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VirtualGarage/VirtualGarage-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>
#import <libobjc.A.dylib/VGOEMApplicationFinding.h>

@protocol OS_dispatch_queue, VGOEMApplicationFinderUpdates;
@class NSSet, NSObject, NSDictionary, NSMutableDictionary, NSString;

@interface VGOEMApplicationFinder : NSObject <LSApplicationWorkspaceObserverProtocol, GEOConfigChangeListenerDelegate, VGOEMApplicationFinding> {

	NSSet* _requiredIntents;
	NSObject*<OS_dispatch_queue> _queue;
	id<VGOEMApplicationFinderUpdates> _delegate;
	NSSet* _disabledAppIdentifiers;
	NSDictionary* _whitelist;
	NSMutableDictionary* _applications;

}

@property (nonatomic,retain) NSSet * disabledAppIdentifiers;                                 //@synthesize disabledAppIdentifiers=_disabledAppIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * whitelist;                                       //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applications;                             //@synthesize applications=_applications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VGOEMApplicationFinderUpdates> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<VGOEMApplicationFinderUpdates>)delegate;
-(void)setDelegate:(id<VGOEMApplicationFinderUpdates>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_VG2*)arg1 ;
-(NSDictionary *)whitelist;
-(NSMutableDictionary *)applications;
-(void)setApplications:(NSMutableDictionary *)arg1 ;
-(void)setWhitelist:(NSDictionary *)arg1 ;
-(void)findOEMApplications;
-(id)_whitelistPayload;
-(void)setDisabledAppIdentifiers:(NSSet *)arg1 ;
-(NSSet *)disabledAppIdentifiers;
-(id)_applicationRecordForBundleIdentifier:(id)arg1 ;
-(BOOL)_addOEMApplicationForApplicationRecordIfNeeded:(id)arg1 ;
-(BOOL)_removeOEMApplicationForBundleIdentifier:(id)arg1 ;
@end

