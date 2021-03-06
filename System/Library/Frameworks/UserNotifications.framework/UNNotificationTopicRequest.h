/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationTopic;

@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationTopic* _topic;
	unsigned long long _supportedOptions;
	unsigned long long _enabledOptions;

}

@property (nonatomic,readonly) unsigned long long supportedOptions;              //@synthesize supportedOptions=_supportedOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long enabledOptions;                //@synthesize enabledOptions=_enabledOptions - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationTopic * topic;                 //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) unsigned long long options; 
+(BOOL)supportsSecureCoding;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3 ;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)_description;
-(UNNotificationTopic *)topic;
-(id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6 ;
-(unsigned long long)supportedOptions;
-(unsigned long long)enabledOptions;
@end

