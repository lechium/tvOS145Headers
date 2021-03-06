/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphNode.h>

@class PVTransformAnimation;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {

	BOOL _isOverlayTrack;
	int _textureWrapMode;
	PVTransformAnimation* _transformAnimation;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGAffineTransform transform;                            //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) PVTransformAnimation * transformAnimation;              //@synthesize transformAnimation=_transformAnimation - In the implementation block
@property (assign,nonatomic) int textureWrapMode;                                    //@synthesize textureWrapMode=_textureWrapMode - In the implementation block
@property (assign,nonatomic) BOOL isOverlayTrack;                                    //@synthesize isOverlayTrack=_isOverlayTrack - In the implementation block
-(id)init;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(BOOL)isPortrait;
-(PVTransformAnimation *)transformAnimation;
-(id)instructionGraphNodeDescription;
-(id)getAllSourceNodes;
-(int)textureWrapMode;
-(HGRef<HGNode>*)applyWrapModeToInput:(HGRef<HGNode>*)arg1 ;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(void)setTextureWrapMode:(int)arg1 ;
-(BOOL)isOverlayTrack;
-(void)setIsOverlayTrack:(BOOL)arg1 ;
@end

