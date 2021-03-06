/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion
{
    BOOL isFirstLayout;
}

- (id)description;
- (id)properties;
- (float)selectionBottom;
- (struct CGRect)layoutAreaBounds;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (void)addColumnBreaks;
- (void)setIsFirstLayout:(BOOL)arg1;
- (BOOL)isFirstLayout;
- (BOOL)isSimilarTo:(id)arg1;
- (void)accept:(id)arg1;
- (id)init;

@end

