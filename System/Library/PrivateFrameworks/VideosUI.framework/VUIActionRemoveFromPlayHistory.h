/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionRemoveFromPlayHistory : VUIAction {

	BOOL _isContinueWatching;
	NSString* _deleteID;
	NSString* _canonicalID;

}

@property (nonatomic,retain) NSString * deleteID;                  //@synthesize deleteID=_deleteID - In the implementation block
@property (nonatomic,retain) NSString * canonicalID;               //@synthesize canonicalID=_canonicalID - In the implementation block
@property (assign,nonatomic) BOOL isContinueWatching;              //@synthesize isContinueWatching=_isContinueWatching - In the implementation block
-(NSString *)canonicalID;
-(NSString *)deleteID;
-(void)setCanonicalID:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 isContinueWatching:(BOOL)arg2 ;
-(void)setDeleteID:(NSString *)arg1 ;
-(BOOL)isContinueWatching;
-(void)setIsContinueWatching:(BOOL)arg1 ;
@end

