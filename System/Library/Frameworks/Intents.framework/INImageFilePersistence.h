/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/INImageStoring.h>

@class INImageBundle, NSArray, NSString;

@interface INImageFilePersistence : NSObject <INImageStoring> {

	INImageBundle* _imageBundle;
	NSArray* __supportedClasses;

}

@property (setter=_setSupportedClasses:,nonatomic,copy) NSArray * _supportedClasses;              //@synthesize _supportedClasses=__supportedClasses - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)serviceIdentifier;
-(BOOL)canStoreImage:(id)arg1 ;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)servicePriority;
-(NSArray *)_supportedClasses;
-(void)purgeExpiredImagesInEphemeralStore;
-(id)_filePathForImageWithFileName:(id)arg1 ;
-(id)_deleteItemAtFilePath:(id)arg1 ;
-(void)_setSupportedClasses:(id)arg1 ;
@end

