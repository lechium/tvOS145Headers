/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject;

@interface TVTopShelfModernContentExtensionStore : NSObject {

	NSString* _extensionPointIdentifier;
	NSDictionary* _extensionRegistry;
	id _extensionMatchingToken;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;

}

@property (nonatomic,copy) NSString * extensionPointIdentifier;                             //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionRegistry;                              //@synthesize extensionRegistry=_extensionRegistry - In the implementation block
@property (nonatomic,retain) id extensionMatchingToken;                                     //@synthesize extensionMatchingToken=_extensionMatchingToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
-(NSString *)extensionPointIdentifier;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(void)setSerialDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)extensionRegistry;
-(id)_extensionMatchingAttributes;
-(void)_updateExtensionRegistryWithExtensions:(id)arg1 ;
-(void)_startMatchingExtensions;
-(void)_stopMatchingExtensions;
-(void)_handleMatchingExtensions:(id)arg1 ;
-(void)setExtensionMatchingToken:(id)arg1 ;
-(id)extensionMatchingToken;
-(id)_extensionRegistryFromExtensions:(id)arg1 ;
-(void)setExtensionRegistry:(NSDictionary *)arg1 ;
-(id)initWithExtensionPointIdentifier:(id)arg1 ;
-(id)extensionForApplicationBundleIdentifier:(id)arg1 ;
-(void)setExtensionPointIdentifier:(NSString *)arg1 ;
@end

