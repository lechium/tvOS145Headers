/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CKDTapToRadarRequest : NSObject {

	NSString* _message;
	NSString* _uuid;
	NSString* _componentName;
	NSString* _componentVersion;
	NSString* _componentID;
	NSString* _relatedRadar;

}

@property (nonatomic,retain) NSString * message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * componentName;                 //@synthesize componentName=_componentName - In the implementation block
@property (nonatomic,retain) NSString * componentVersion;              //@synthesize componentVersion=_componentVersion - In the implementation block
@property (nonatomic,retain) NSString * componentID;                   //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) NSString * relatedRadar;                  //@synthesize relatedRadar=_relatedRadar - In the implementation block
-(NSString *)uuid;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)componentName;
-(NSString *)relatedRadar;
-(void)setRelatedRadar:(NSString *)arg1 ;
-(NSString *)componentID;
-(NSString *)componentVersion;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentVersion:(NSString *)arg1 ;
-(void)setComponentID:(NSString *)arg1 ;
@end

