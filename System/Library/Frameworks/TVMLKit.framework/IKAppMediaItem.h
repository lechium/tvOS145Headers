/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSString, IKAppMediaItemBridge;


@protocol IKAppMediaItem
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,readonly) IKAppMediaItemBridge * bridge; 
@required
-(void)setType:(id)arg1;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(NSString *)type;
-(void)setUrl:(id)arg1;
-(NSURL *)url;
-(IKAppMediaItemBridge *)bridge;

@end

