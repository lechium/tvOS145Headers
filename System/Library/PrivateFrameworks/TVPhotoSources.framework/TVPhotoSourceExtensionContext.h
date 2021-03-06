/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <TVPhotoSources/TVPhotoSourceExtensionProtocol.h>

@protocol TVPhotoSourceExtensionProtocol;
@interface TVPhotoSourceExtensionContext : NSExtensionContext <TVPhotoSourceExtensionProtocol> {

	id<TVPhotoSourceExtensionProtocol> _protocolHandler;

}

@property (assign,nonatomic,__weak) id<TVPhotoSourceExtensionProtocol> protocolHandler;              //@synthesize protocolHandler=_protocolHandler - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setProtocolHandler:(id<TVPhotoSourceExtensionProtocol>)arg1 ;
-(id<TVPhotoSourceExtensionProtocol>)protocolHandler;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

