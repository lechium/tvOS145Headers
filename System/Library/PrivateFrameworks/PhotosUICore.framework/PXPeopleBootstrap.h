/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXPeopleBootstrap : NSObject
+(CGSize)preferredBootstrapSize;
+(void)performBootstrapWithSourcePerson:(id)arg1 context:(id)arg2 synchronous:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(void)_addToPeopleAlbumWithChangeRequest:(id)arg1 ;
+(void)_favoritePersonWithChangeRequest:(id)arg1 ;
+(void)_unfavoritePersonWithChangeRequest:(id)arg1 ;
+(void)_namePerson:(id)arg1 context:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_mergePerson:(id)arg1 context:(id)arg2 toPerson:(id)arg3 ;
@end

