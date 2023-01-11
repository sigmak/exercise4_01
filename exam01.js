//참고 1 : https://seokbong.tistory.com/14
//참고 2 : https://cran.r-project.org/web/packages/toastui/toastui.pdf


const initGrid = () => {
    // 그리드 객체
    const Grid = tui.Grid;

    /**
     * Grid 테마 커스텀
     * Grid.applyTheme('striped', {...}) : 
     * @param {String} default : 프리셋 (기본)
     * @param {String} striped : 프리셋 (줄무늬)
     * @param {String} clean : 프리셋 (클린)
     *      - preset theme name. Available values are 'default', 'striped' and 'clean'.
     *      - https://nhn.github.io/tui.grid/latest/Grid#applyTheme
     */
    Grid.applyTheme('defualt',  {
        cell: {
            normal: {
                border: 'black'
            },
            header: {
                background: 'gray',
                text: 'white'
            },
            evenRow: {
                background: '#fee'
            }
        }
    });

    /**
     * 그리드 설정
     * @variable {Dom} el : 그리드 element(DOM)
     * @variable {boolean} scrollX : X 스크롤 사용여부
     * @variable {boolean} scrollY : Y 스크롤 사용여부
     * @variable {boolean} draggable : 드레그 사용 여부
     * @variable {Object} header
     *      - @variable {Number} height : 헤더 높이
     * @variable {Number} bodyHeight : 그리드 바디 높이
     * @variable {*} contextMenu : 마우스 우클릭 옵션
     * @variable {Array} columns :
     *      - @variable {String} header : 컬럼명(헤더)
     *      - @variable {String} name : 컬럼 name (input data와 이름이 일치해야함)
     *      - @variable {String} align : 정렬
     *      - @variable {Number} width : 너비
     *      - @variable {String} whiteSpace : 줄바꿈 설정
     *      - @variable {Function} formatter : 출력 포멧
     * 기타 옵션은 공식 document를 참조하자.
     */
    
    const sampleGrid = new Grid({
        el: document.getElementById('gridDiv'),
      scrollX: false,
      scrollY: false,
      //data: gridData,
      header: {
        height: 50,
        complexColumns: [
          {
            header: 'header',
            name: 'mergeColumn5',
			hideChildHeaders : true, // 자식 헤더들 숨김처리
            childNames: ['no', 'col2','col3','col4','col5'],
          }
        ]
      },
	  
      columns: [
        {
	      header: '컬럼1',
          name: 'no'
        },
        {
          header: '컬럼2',
          name: 'col2'
        },
        {
          header: '컬럼3',
          name: 'col3'
        },
        {
          header: '컬럼4',
          name: 'col4'
        },
        {
          header: '컬럼5',
          name: 'col5'
        }
      ],
    });

    return sampleGrid;
}

window.onload = () => {
    // 그리드 설정
    const createdGrid = initGrid();
    // 샘플 데이터
    const sampleData = [
        {
            no: '1',
            col2: 'test',
            col3: 'data',
            col4: '1254',
            col5: 'qaa',

        },
        {
            no: '2',
            col2: 'test2',
            col3: 'bhkjb',
            col4: '12',
            col5: 'hj',
        },
        {
            no: '3',
            col2: 'tttt',
            col3: 'bnmbn',
            col4: '545',
            col5: 'hj',
        }
    ];

    // 그리드에 데이터 넣기(출력)
    createdGrid.resetData(sampleData);
}