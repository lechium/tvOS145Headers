/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelObject, MPMediaLibrary, MPModelKind;

@interface MPModelLibraryHasPurchasesRequest : NSObject {

	MPModelObject* _modelObject;
	MPMediaLibrary* _mediaLibrary;
	MPModelKind* _itemKind;

}

@property (nonatomic,retain) MPModelObject * modelObject;                //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) MPModelKind * itemKind;                     //@synthesize itemKind=_itemKind - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPModelKind *)itemKind;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)modelObject;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
@end

