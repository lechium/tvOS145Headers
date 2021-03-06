/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class NSArray, TVHKMediaLibraryRevision, NSSet, NSDictionary, NSMutableDictionary;

@interface TVHKMediaLibraryFetchControllerManagerOperation : TVHKAsynchronousOperation {

	NSArray* _fetchControllers;
	TVHKMediaLibraryRevision* _mediaLibraryRevision;
	NSSet* _changedDMAPServerProtocols;
	NSDictionary* _dependentMediaEntitiesFetchControllersDictionary;
	NSMutableDictionary* _changedSourceMediaEntityDictionary;

}

@property (nonatomic,copy,readonly) NSArray * fetchControllers;                                                   //@synthesize fetchControllers=_fetchControllers - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaLibraryRevision * mediaLibraryRevision;                              //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
@property (nonatomic,copy,readonly) NSSet * changedDMAPServerProtocols;                                           //@synthesize changedDMAPServerProtocols=_changedDMAPServerProtocols - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dependentMediaEntitiesFetchControllersDictionary;              //@synthesize dependentMediaEntitiesFetchControllersDictionary=_dependentMediaEntitiesFetchControllersDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * changedSourceMediaEntityDictionary;                          //@synthesize changedSourceMediaEntityDictionary=_changedSourceMediaEntityDictionary - In the implementation block
+(id)new;
+(id)_dependentMediaEntitiesFetchControllersDictionaryForFetchControllers:(id)arg1 ;
-(id)init;
-(void)executionDidBegin;
-(NSSet *)changedDMAPServerProtocols;
-(TVHKMediaLibraryRevision *)mediaLibraryRevision;
-(id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(id)arg2 changedDMAPServerProtocols:(id)arg3 ;
-(NSArray *)fetchControllers;
-(id)_startQueryUserInfoForFetchController:(id)arg1 ;
-(void)_didCompleteQueryForFetchController:(id)arg1 withResult:(id)arg2 ;
-(NSMutableDictionary *)changedSourceMediaEntityDictionary;
-(NSDictionary *)dependentMediaEntitiesFetchControllersDictionary;
@end

