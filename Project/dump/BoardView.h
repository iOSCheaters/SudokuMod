/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "GameStateObserver-Protocol.h"

@class GameState, Options, UIImage, UIImageView;

@interface BoardView : _ADBannerContentSizeIdentifierLandscape <GameStateObserver>
{
    float cellSize;
    float subCellSize;
    UIImageView *selectionRect;
    UIImage *bgImage;
    UIImage *circleImage;
    UIImage *squiggleImage;
    GameState *gameState;
    id <NSObject><BoardViewDelegate> delegate;
    Options *options;
}

- (void)setOptions:(id)fp8;
- (id)options;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)gameState;
- (void)didChangeHighlightNumberFrom:(int)fp8 to:(int)fp12;
- (void)didChangeSelectionFrom:(int)fp8 to:(int)fp12;
- (void)didChangeConflictFrom:(BOOL)fp8 to:(BOOL)fp12 forCell:(int)fp16;
- (void)didChangeCell:(int)fp8 from:(CDAnonymousStruct2)fp12 to:(CDAnonymousStruct2)fp20;
- (void)layoutSubviews;
- (void)invalidateAllNumberInstances:(int)fp8;
- (void)setGameState:(id)fp8;
- (void)updateSelection;
- (void)invalidateCell:(int)fp8;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)handleTouch:(id)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)drawBG:(struct CGContext *)fp8;
- (struct CGRect)rectForCell:(int)fp8;
- (struct CGPoint)getOffset;
- (void)dealloc;
- (void)awakeFromNib;

@end

