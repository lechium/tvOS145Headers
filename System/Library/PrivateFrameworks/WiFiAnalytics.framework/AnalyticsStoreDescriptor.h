/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject {

	unsigned long long _type;
	NSURL* _modelURL;
	NSURL* _storeURL;
	NSDictionary* _remoteStoreOptions;
	NSPersistentStoreDescription* _storeDescription;

}

@property (nonatomic,retain) NSURL * modelURL;                                               //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                               //@synthesize storeURL=_storeURL - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteStoreOptions;                            //@synthesize remoteStoreOptions=_remoteStoreOptions - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreDescription * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
+(id)defaultPersistentStoreURL;
+(id)defaultModelURL;
+(id)applicationSupportDirectoryPath;
+(id)serverStoreDescriptor;
+(id)directStoreDescriptor;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSURL *)modelURL;
-(NSPersistentStoreDescription *)storeDescription;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3 ;
-(NSDictionary *)remoteStoreOptions;
@end

