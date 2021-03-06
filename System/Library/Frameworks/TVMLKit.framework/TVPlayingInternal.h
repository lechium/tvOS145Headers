/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPlayingInternal <TVPlaying>
@property (assign,nonatomic) BOOL pausesOnHDCPProtectionDown; 
@property (assign,nonatomic) BOOL updatesMediaRemoteInfoAutomatically; 
@required
-(void)setUpdatesMediaRemoteInfoAutomatically:(BOOL)arg1;
-(void)setPausesOnHDCPProtectionDown:(BOOL)arg1;
-(BOOL)updatesMediaRemoteInfoAutomatically;
-(BOOL)pausesOnHDCPProtectionDown;

@end

