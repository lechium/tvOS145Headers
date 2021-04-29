/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CDDCloudKitMessage.h>

@class NSString, NSFileHandle;

@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage {

	NSString* _bundleIdentifier;
	NSFileHandle* _storeFileHandle;
	NSString* _storePath;
	NSString* _storeFileProtectionClass;
	NSString* _storeType;
	NSString* _storeConfigurationName;
	NSString* _containerIdentifier;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
