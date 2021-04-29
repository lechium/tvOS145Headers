/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DEDNotifierConfiguration : NSObject <DEDSecureArchiving, NSSecureCoding> {

	BOOL _userNotificationShouldPlaySound;
	NSString* _hostAppIdentifier;
	NSString* _localizedNotificationTitle;
	NSString* _localizedNotificationBody;
	NSString* _reviewActionLabel;
	NSString* _sendActionLabel;

}

@property (retain) NSString * hostAppIdentifier;                       //@synthesize hostAppIdentifier=_hostAppIdentifier - In the implementation block
@property (retain) NSString * localizedNotificationTitle;              //@synthesize localizedNotificationTitle=_localizedNotificationTitle - In the implementation block
@property (retain) NSString * localizedNotificationBody;               //@synthesize localizedNotificationBody=_localizedNotificationBody - In the implementation block
@property (retain) NSString * reviewActionLabel;                       //@synthesize reviewActionLabel=_reviewActionLabel - In the implementation block
@property (retain) NSString * sendActionLabel;                         //@synthesize sendActionLabel=_sendActionLabel - In the implementation block
@property (assign) BOOL userNotificationShouldPlaySound;               //@synthesize userNotificationShouldPlaySound=_userNotificationShouldPlaySound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hostAppIdentifier;
-(NSString *)localizedNotificationTitle;
-(NSString *)localizedNotificationBody;
-(NSString *)reviewActionLabel;
-(NSString *)sendActionLabel;
-(BOOL)userNotificationShouldPlaySound;
-(id)initWithHostAppIdentifier:(id)arg1 localizedNotificationTitle:(id)arg2 localizedNotificationBody:(id)arg3 ;
-(void)setHostAppIdentifier:(NSString *)arg1 ;
-(void)setLocalizedNotificationTitle:(NSString *)arg1 ;
-(void)setLocalizedNotificationBody:(NSString *)arg1 ;
-(void)setReviewActionLabel:(NSString *)arg1 ;
-(void)setSendActionLabel:(NSString *)arg1 ;
-(void)setUserNotificationShouldPlaySound:(BOOL)arg1 ;
@end
