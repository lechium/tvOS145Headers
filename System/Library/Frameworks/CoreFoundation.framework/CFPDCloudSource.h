/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

@interface CFPDCloudSource : CFPDContainerSource {

	SYDRemotePreferencesSource* cloudSource;
	CFStringRef _configurationPath;

}
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1 ;
-(void)processEndOfMessageIntendingToRemoveSource:(BOOL*)arg1 ;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 storeName:(id)arg3 configurationPath:(CFStringRef)arg4 containerPath:(CFStringRef)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(void)synchronizeWithCloud:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)copyPropertyListValidatingPlist:(BOOL)arg1 ;
-(CFStringRef)debugDump;
-(CFStringRef)cloudConfigurationPath;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
@end

