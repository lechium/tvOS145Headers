//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, BKDisplayAnnotationLocation, BKDisplayAnnotationRenderer, BKDisplayAnnotationStyleSheet, BKNamespaceNode, NSString;
@protocol BKDisplayAnnotationContent;

@interface BKDisplayAnnotation : NSObject
{
    BKDisplayAnnotationLocation *_location;	// 8 = 0x8
    BKDisplayAnnotationRenderer *_renderer;	// 16 = 0x10
    NSString *_section;	// 24 = 0x18
    long long _subnodeScreenEdgeTreatment;	// 32 = 0x20
    id <BKDisplayAnnotationContent> _content;	// 40 = 0x28
    BKDisplayAnnotationController *_annotationController;	// 48 = 0x30
    BKDisplayAnnotationStyleSheet *_styleSheet;	// 56 = 0x38
    BKNamespaceNode *_namespaceNode;	// 64 = 0x40
}

+ (id)new;	// IMP=0x0000000100057f98
+ (id)annotationWithRectangleSize:(struct CGSize)arg1;	// IMP=0x0000000100057e9c
+ (id)annotationWithEllipseSize:(struct CGSize)arg1;	// IMP=0x0000000100057da0
+ (id)subannotationWithString:(id)arg1;	// IMP=0x0000000100057d40
+ (id)annotationWithString:(id)arg1;	// IMP=0x0000000100057c3c
- (void).cxx_destruct;	// IMP=0x0000000100057bd8
@property(nonatomic) __weak BKNamespaceNode *namespaceNode; // @synthesize namespaceNode=_namespaceNode;
@property(retain, nonatomic) BKDisplayAnnotationStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(nonatomic) __weak BKDisplayAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(retain, nonatomic) id <BKDisplayAnnotationContent> content; // @synthesize content=_content;
@property(nonatomic) long long subnodeScreenEdgeTreatment; // @synthesize subnodeScreenEdgeTreatment=_subnodeScreenEdgeTreatment;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) BKDisplayAnnotationRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) BKDisplayAnnotationLocation *location; // @synthesize location=_location;
- (void)setStyleModifier:(id)arg1;	// IMP=0x0000000100057b08
- (void)modifyStyleSheet:(CDUnknownBlockType)arg1;	// IMP=0x0000000100057ad0
- (void)setShapeSize:(struct CGSize)arg1;	// IMP=0x0000000100057a7c
- (void)setString:(id)arg1;	// IMP=0x00000001000579c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100057764
- (id)description;	// IMP=0x0000000100057754
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000576d4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100057680
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100057668
- (id)succinctDescription;	// IMP=0x0000000100057614
- (id)_init;	// IMP=0x0000000100057570
- (id)init;	// IMP=0x00000001000574ec

@end

