/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLAssetContainerList <NSObject,PLDiagnosticsProvider>
@property (nonatomic,readonly) unsigned long long containersCount; 
@required
-(BOOL)isEmpty;
-(id)managedObjectContext;
-(id)photoLibrary;
-(id)containers;
-(unsigned long long)containersCount;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;

@end
